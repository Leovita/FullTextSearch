#ifndef org_apache_lucene_codecs_blockterms_TermsIndexReaderBase_H
#define org_apache_lucene_codecs_blockterms_TermsIndexReaderBase_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase$FieldIndexEnum;
        }
      }
      namespace index {
        class FieldInfo;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class TermsIndexReaderBase : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getFieldEnum_f69c33209e4e27f2,
              mid_supportsOrd_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermsIndexReaderBase(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermsIndexReaderBase(const TermsIndexReaderBase& obj) : ::java::lang::Object(obj) {}

            TermsIndexReaderBase();

            void close() const;
            ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase$FieldIndexEnum getFieldEnum(const ::org::apache::lucene::index::FieldInfo &) const;
            jboolean supportsOrd() const;
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
          extern PyType_Def PY_TYPE_DEF(TermsIndexReaderBase);
          extern PyTypeObject *PY_TYPE(TermsIndexReaderBase);

          class t_TermsIndexReaderBase {
          public:
            PyObject_HEAD
            TermsIndexReaderBase object;
            static PyObject *wrap_Object(const TermsIndexReaderBase&);
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
