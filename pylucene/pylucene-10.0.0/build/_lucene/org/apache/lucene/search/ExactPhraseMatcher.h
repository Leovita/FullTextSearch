#ifndef org_apache_lucene_search_ExactPhraseMatcher_H
#define org_apache_lucene_search_ExactPhraseMatcher_H

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

        class ExactPhraseMatcher : public ::org::apache::lucene::search::PhraseMatcher {
         public:
          enum {
            mid_init$_86e34157c358f35d,
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
