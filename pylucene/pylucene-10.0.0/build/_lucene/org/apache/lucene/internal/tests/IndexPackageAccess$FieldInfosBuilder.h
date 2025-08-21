#ifndef org_apache_lucene_internal_tests_IndexPackageAccess$FieldInfosBuilder_H
#define org_apache_lucene_internal_tests_IndexPackageAccess$FieldInfosBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfos;
        class FieldInfo;
      }
      namespace internal {
        namespace tests {
          class IndexPackageAccess$FieldInfosBuilder;
        }
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
      namespace internal {
        namespace tests {

          class IndexPackageAccess$FieldInfosBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_add_44fcd01fedad70c4,
              mid_finish_2d5786d39aaa5f0b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexPackageAccess$FieldInfosBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexPackageAccess$FieldInfosBuilder(const IndexPackageAccess$FieldInfosBuilder& obj) : ::java::lang::Object(obj) {}

            IndexPackageAccess$FieldInfosBuilder add(const ::org::apache::lucene::index::FieldInfo &) const;
            ::org::apache::lucene::index::FieldInfos finish() const;
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(IndexPackageAccess$FieldInfosBuilder);
          extern PyTypeObject *PY_TYPE(IndexPackageAccess$FieldInfosBuilder);

          class t_IndexPackageAccess$FieldInfosBuilder {
          public:
            PyObject_HEAD
            IndexPackageAccess$FieldInfosBuilder object;
            static PyObject *wrap_Object(const IndexPackageAccess$FieldInfosBuilder&);
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
