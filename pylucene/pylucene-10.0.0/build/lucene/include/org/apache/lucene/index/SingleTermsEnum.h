#ifndef org_apache_lucene_index_SingleTermsEnum_H
#define org_apache_lucene_index_SingleTermsEnum_H

#include "org/apache/lucene/index/FilteredTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SingleTermsEnum : public ::org::apache::lucene::index::FilteredTermsEnum {
         public:
          enum {
            mid_init$_5fbedda0c93e646b,
            mid_accept_da290bd6151f1a3d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SingleTermsEnum(jobject obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SingleTermsEnum(const SingleTermsEnum& obj) : ::org::apache::lucene::index::FilteredTermsEnum(obj) {}

          SingleTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::BytesRef &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SingleTermsEnum);
        extern PyTypeObject *PY_TYPE(SingleTermsEnum);

        class t_SingleTermsEnum {
        public:
          PyObject_HEAD
          SingleTermsEnum object;
          static PyObject *wrap_Object(const SingleTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
