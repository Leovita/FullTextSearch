#ifndef org_apache_lucene_search_ExactPhraseMatcher_H
#define org_apache_lucene_search_ExactPhraseMatcher_H

#include "org/apache/lucene/search/PhraseMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class PhraseQuery$PostingsAndFreq;
        class ScoreMode;
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

        class ExactPhraseMatcher : public ::org::apache::lucene::search::PhraseMatcher {
         public:
          enum {
            mid_init$_95f403f3186841a1,
            mid_endOffset_20fbf7565993c3d7,
            mid_endPosition_20fbf7565993c3d7,
            mid_nextMatch_947277eca0748c4e,
            mid_reset_3720c61b0679eb3e,
            mid_startOffset_20fbf7565993c3d7,
            mid_startPosition_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExactPhraseMatcher(jobject obj) : ::org::apache::lucene::search::PhraseMatcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExactPhraseMatcher(const ExactPhraseMatcher& obj) : ::org::apache::lucene::search::PhraseMatcher(obj) {}

          ExactPhraseMatcher(const JArray< ::org::apache::lucene::search::PhraseQuery$PostingsAndFreq > &, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::similarities::Similarity$SimScorer &, jfloat);

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
        extern PyType_Def PY_TYPE_DEF(ExactPhraseMatcher);
        extern PyTypeObject *PY_TYPE(ExactPhraseMatcher);

        class t_ExactPhraseMatcher {
        public:
          PyObject_HEAD
          ExactPhraseMatcher object;
          static PyObject *wrap_Object(const ExactPhraseMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
