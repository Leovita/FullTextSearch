#ifndef org_apache_lucene_index_BaseTermsEnum_H
#define org_apache_lucene_index_BaseTermsEnum_H

#include "org/apache/lucene/index/TermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class BytesRef;
        class IOBooleanSupplier;
      }
      namespace index {
        class TermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class BaseTermsEnum : public ::org::apache::lucene::index::TermsEnum {
         public:
          enum {
            mid_attributes_cdef0e51a2510793,
            mid_prepareSeekExact_0a02c02826151691,
            mid_seekExact_08ac7a49de309824,
            mid_seekExact_68ebcc8117fd12a5,
            mid_termState_7f3f2ee4b8db95a4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseTermsEnum(jobject obj) : ::org::apache::lucene::index::TermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseTermsEnum(const BaseTermsEnum& obj) : ::org::apache::lucene::index::TermsEnum(obj) {}

          ::org::apache::lucene::util::AttributeSource attributes() const;
          ::org::apache::lucene::util::IOBooleanSupplier prepareSeekExact(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          ::org::apache::lucene::index::TermState termState() const;
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
        extern PyType_Def PY_TYPE_DEF(BaseTermsEnum);
        extern PyTypeObject *PY_TYPE(BaseTermsEnum);

        class t_BaseTermsEnum {
        public:
          PyObject_HEAD
          BaseTermsEnum object;
          static PyObject *wrap_Object(const BaseTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
