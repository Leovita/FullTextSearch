#ifndef org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode$QueryText_H
#define org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode$QueryText_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class CloneNotSupportedException;
    class Cloneable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class PathQueryNode$QueryText;
            }
          }
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
        namespace flexible {
          namespace core {
            namespace nodes {

              class PathQueryNode$QueryText : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_17dee08b301eed95,
                  mid_clone_be2fa484ffe4ea6b,
                  mid_getBegin_20fbf7565993c3d7,
                  mid_getEnd_20fbf7565993c3d7,
                  mid_getValue_373f0038978f926b,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PathQueryNode$QueryText(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PathQueryNode$QueryText(const PathQueryNode$QueryText& obj) : ::java::lang::Object(obj) {}

                PathQueryNode$QueryText(const ::java::lang::CharSequence &, jint, jint);

                PathQueryNode$QueryText clone() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getValue() const;
                ::java::lang::String toString() const;
              };
            }
          }
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
        namespace flexible {
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(PathQueryNode$QueryText);
              extern PyTypeObject *PY_TYPE(PathQueryNode$QueryText);

              class t_PathQueryNode$QueryText {
              public:
                PyObject_HEAD
                PathQueryNode$QueryText object;
                static PyObject *wrap_Object(const PathQueryNode$QueryText&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
