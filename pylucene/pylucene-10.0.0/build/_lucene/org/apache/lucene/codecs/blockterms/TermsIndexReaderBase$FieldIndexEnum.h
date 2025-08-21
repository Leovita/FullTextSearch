#ifndef org_apache_lucene_codecs_blockterms_TermsIndexReaderBase$FieldIndexEnum_H
#define org_apache_lucene_codecs_blockterms_TermsIndexReaderBase$FieldIndexEnum_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace codecs {
        namespace blockterms {

          class TermsIndexReaderBase$FieldIndexEnum : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_next_16939d9d0a9a9721,
              mid_ord_16939d9d0a9a9721,
              mid_seek_7595cb5441b08443,
              mid_seek_91d66fa3ea476cea,
              mid_term_9740fddd1c7df148,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermsIndexReaderBase$FieldIndexEnum(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermsIndexReaderBase$FieldIndexEnum(const TermsIndexReaderBase$FieldIndexEnum& obj) : ::java::lang::Object(obj) {}

            TermsIndexReaderBase$FieldIndexEnum();

            jlong next() const;
            jlong ord() const;
            jlong seek(const ::org::apache::lucene::util::BytesRef &) const;
            jlong seek(jlong) const;
            ::org::apache::lucene::util::BytesRef term() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(TermsIndexReaderBase$FieldIndexEnum);
          extern PyTypeObject *PY_TYPE(TermsIndexReaderBase$FieldIndexEnum);

          class t_TermsIndexReaderBase$FieldIndexEnum {
          public:
            PyObject_HEAD
            TermsIndexReaderBase$FieldIndexEnum object;
            static PyObject *wrap_Object(const TermsIndexReaderBase$FieldIndexEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
