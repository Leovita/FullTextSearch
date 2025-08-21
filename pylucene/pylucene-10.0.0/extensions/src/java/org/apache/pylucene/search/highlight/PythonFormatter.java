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

package org.apache.pylucene.search.highlight;

import org.apache.lucene.search.highlight.Formatter;
import org.apache.lucene.search.highlight.TokenGroup;
import org.apache.pylucene.ref.PythonObject;
import org.apache.pylucene.ref.PythonObjectManager;

public class PythonFormatter implements Formatter {

    private PythonObject pythonObject;

    public PythonFormatter()
    {
    }

    public void pythonExtension(long pythonObject)
    {
        this.pythonObject = PythonObjectManager.register(pythonObject);
    }
    public long pythonExtension()
    {
        return this.pythonObject.pythonObject;
    }

    @Override
    public native String highlightTerm(String originalText,
                                       TokenGroup tokenGroup);
}
