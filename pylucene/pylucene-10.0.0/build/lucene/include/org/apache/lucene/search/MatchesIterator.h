#ifndef org_apache_lucene_search_MatchesIterator_H
#define org_apache_lucene_search_MatchesIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MatchesIterator;
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MatchesIterator : public ::java::lang::Object {
         public:
          enum {
            mid_endOffset_bd89ce15dad49192,
            mid_endPosition_bd89ce15dad49192,
            mid_getQuery_ffa7bd087b2a75aa,
            mid_getSubMatches_c52001fbf5524745,
            mid_next_9aa4f33e82ea333f,
            mid_startOffset_bd89ce15dad49192,
            mid_startPosition_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MatchesIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MatchesIterator(const MatchesIterator& obj) : ::java::lang::Object(obj) {}

          jint endOffset() const;
          jint endPosition() const;
          ::org::apache::lucene::search::Query getQuery() const;
          MatchesIterator getSubMatches() const;
          jboolean next() const;
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
        extern PyType_Def PY_TYPE_DEF(MatchesIterator);
        extern PyTypeObject *PY_TYPE(MatchesIterator);

        class t_MatchesIterator {
        public:
          PyObject_HEAD
          MatchesIterator object;
          static PyObject *wrap_Object(const MatchesIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
