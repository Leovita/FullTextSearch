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

import java.lang.ref.PhantomReference;
import java.lang.ref.ReferenceQueue;

public class PythonObjectFinalizer extends PhantomReference<PythonObject> {
    long pythonObject;

    public PythonObjectFinalizer(
        PythonObject referent, ReferenceQueue<? super PythonObject> queue) {
        super(referent, queue);
        this.pythonObject = referent.pythonObject;
    }

    // called by pythonDecRef()
    public long pythonExtension()
    {
        return this.pythonObject;
    }
    // called by pythonDecRef() with 0
    public void pythonExtension(long pythonObject)
    {
        this.pythonObject = pythonObject;
    }

    // Called by PythonObjectManager's finalizer thread when this instance
    // becomes available after GC
    public native void pythonDecRef();
}
