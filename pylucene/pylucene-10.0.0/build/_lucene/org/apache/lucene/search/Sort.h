#ifndef org_apache_lucene_search_Sort_H
#define org_apache_lucene_search_Sort_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_41bc56c8777a3186,
            mid_equals_570b5248a6da3ef6,
            mid_getSort_2e1e97dcdd6b0568,
            mid_hashCode_20fbf7565993c3d7,
            mid_needsScores_947277eca0748c4e,
            mid_rewrite_9873b16209f1036a,
            mid_toString_09a7afff1868fc5e,
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
