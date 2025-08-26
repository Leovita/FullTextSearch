#ifndef org_apache_lucene_search_Sort_H
#define org_apache_lucene_search_Sort_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class SortField;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Sort : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_e68612b4a3c3ab8e,
            mid_equals_00d17418847797d4,
            mid_getSort_738de4f67ee40547,
            mid_hashCode_bd89ce15dad49192,
            mid_needsScores_9aa4f33e82ea333f,
            mid_rewrite_322deb1aca016b0e,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sort(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sort(const Sort& obj) : ::java::lang::Object(obj) {}

          static Sort *INDEXORDER;
          static Sort *RELEVANCE;

          Sort();
          Sort(const JArray< ::org::apache::lucene::search::SortField > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< ::org::apache::lucene::search::SortField > getSort() const;
          jint hashCode() const;
          jboolean needsScores() const;
          Sort rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Sort);
        extern PyTypeObject *PY_TYPE(Sort);

        class t_Sort {
        public:
          PyObject_HEAD
          Sort object;
          static PyObject *wrap_Object(const Sort&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
