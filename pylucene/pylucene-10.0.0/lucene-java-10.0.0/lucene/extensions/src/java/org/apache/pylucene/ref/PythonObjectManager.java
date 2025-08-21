/* ====================================================================
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 * ====================================================================
 */

package org.apache.pylucene.ref;

import java.lang.ref.Reference;
import java.lang.ref.ReferenceQueue;

// PythonObjectManager accepts pythonObject ptrs (as long) and returns a
// PythonObject instance wrapping it that is also added to a phanton reference
// queue of PythonObjectFinalizer objects.
// When the PythonObject is GC'd, its PythonObjectFinalizer phantom reference
// is made available to the manager's Thread and the finalizer's pythonDecRef()
// native method is called, decrementing the ptr's refcount on the Python side.
//
// This replaces the extensions finalize() methods, long deprecated.

public class PythonObjectManager implements Runnable {
    static private PythonObjectManager mgr = new PythonObjectManager();

    static public PythonObject register(long pythonObject) {
        PythonObject referent = new PythonObject(pythonObject);
        new PythonObjectFinalizer(referent, mgr.referenceQueue);

        return referent;
    }

    private ReferenceQueue<PythonObject> referenceQueue = new ReferenceQueue<PythonObject>();

    private PythonObjectManager() {
        Thread finalizer = new Thread(this);

        finalizer.setDaemon(true);
        finalizer.start();
    }

    public void run() {
        Reference<? extends PythonObject> ref;
        try {
            while ((ref = referenceQueue.remove()) != null) {
                ((PythonObjectFinalizer) ref).pythonDecRef();
                ref.clear();
            }
        } catch (InterruptedException e) {
        }
    }
}
