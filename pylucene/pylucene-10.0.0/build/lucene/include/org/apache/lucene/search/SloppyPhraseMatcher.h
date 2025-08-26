#ifndef org_apache_lucene_search_SloppyPhraseMatcher_H
#define org_apache_lucene_search_SloppyPhraseMatcher_H

#include "org/apache/lucene/search/PhraseMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class PhraseQuery$PostingsAndFreq;
        namespace similarities {
          class Similarity$SimScorer;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SloppyPhraseMatcher : public ::org::apache::lucene::search::PhraseMatcher {
         public:
          enum {
            mid_init$_9c51c7e2c01d8524,
            mid_endOffset_bd89ce15dad49192,
            mid_endPosition_bd89ce15dad49192,
            mid_nextMatch_9aa4f33e82ea333f,
            mid_reset_e7bdbe105ce1bafb,
            mid_startOffset_bd89ce15dad49192,
            mid_startPosition_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SloppyPhraseMatcher(jobject obj) : ::org::apache::lucene::search::PhraseMatcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SloppyPhraseMatcher(const SloppyPhraseMatcher& obj) : ::org::apache::lucene::search::PhraseMatcher(obj) {}

          SloppyPhraseMatcher(const JArray< ::org::apache::lucene::search::PhraseQuery$PostingsAndFreq > &, jint, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::similarities::Similarity$SimScorer &, jfloat, jboolean);

          jint endOffset() const;
          jint endPosition() const;
          jboolean nextMatch() const;
          void reset() const;
          jint startOffset() const;
          jint startPosition() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SloppyPhraseMatcher);
        extern PyTypeObject *PY_TYPE(SloppyPhraseMatcher);

        class t_SloppyPhraseMatcher {
        public:
          PyObject_HEAD
          SloppyPhraseMatcher object;
          static PyObject *wrap_Object(const SloppyPhraseMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
