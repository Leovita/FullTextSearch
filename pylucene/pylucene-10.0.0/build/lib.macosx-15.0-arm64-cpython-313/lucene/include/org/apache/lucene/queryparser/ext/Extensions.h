#ifndef org_apache_lucene_queryparser_ext_Extensions_H
#define org_apache_lucene_queryparser_ext_Extensions_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {
          class Extensions$Pair;
          class ParserExtension;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {

          class Extensions : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_97f8668422006638,
              mid_add_86ad3fccc3255391,
              mid_buildExtensionField_cb0eb1432185fc94,
              mid_buildExtensionField_6829292399b85216,
              mid_escapeExtensionField_cb0eb1432185fc94,
              mid_getExtension_e791b00f549ca21b,
              mid_getExtensionFieldDelimiter_6c956faefc706166,
              mid_splitExtensionField_a8255a41afc5d58f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Extensions(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Extensions(const Extensions& obj) : ::java::lang::Object(obj) {}

            static jchar DEFAULT_EXTENSION_FIELD_DELIMITER;

            Extensions();
            Extensions(jchar);

            void add(const ::java::lang::String &, const ::org::apache::lucene::queryparser::ext::ParserExtension &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::lang::String escapeExtensionField(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::ext::ParserExtension getExtension(const ::java::lang::String &) const;
            jchar getExtensionFieldDelimiter() const;
            ::org::apache::lucene::queryparser::ext::Extensions$Pair splitExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
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
      namespace queryparser {
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(Extensions);
          extern PyTypeObject *PY_TYPE(Extensions);

          class t_Extensions {
          public:
            PyObject_HEAD
            Extensions object;
            static PyObject *wrap_Object(const Extensions&);
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
