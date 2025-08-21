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
      namespace index {

        class BaseTermsEnum : public ::org::apache::lucene::index::TermsEnum {
         public:
          enum {
            mid_attributes_ee6fc324885c7c07,
            mid_prepareSeekExact_a6006c0d7e0ec315,
            mid_seekExact_f460ee421aade2fd,
            mid_seekExact_5c001dd449c905b9,
            mid_termState_0f33111124ab1b09,
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
