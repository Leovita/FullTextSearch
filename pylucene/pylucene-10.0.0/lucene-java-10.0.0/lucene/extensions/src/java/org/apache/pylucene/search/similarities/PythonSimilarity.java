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

package org.apache.pylucene.search.similarities;

import java.io.IOException;

import org.apache.lucene.index.FieldInvertState;
import org.apache.lucene.search.CollectionStatistics;
import org.apache.lucene.search.TermStatistics;
import org.apache.lucene.search.similarities.Similarity;
import org.apache.lucene.util.BytesRef;
import org.apache.pylucene.ref.PythonObject;
import org.apache.pylucene.ref.PythonObjectManager;

public class PythonSimilarity extends Similarity {

    private PythonObject pythonObject;

    public PythonSimilarity()
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
    public native long computeNorm(FieldInvertState state);

    @Override
    public native SimScorer scorer(
        float boost, CollectionStatistics collectionStats,
        TermStatistics... termStats);

    public static class PythonSimScorer extends SimScorer {
        private PythonObject pythonObject;

        public PythonSimScorer()
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
        public native float score(float freq, long norm);
    }
}
