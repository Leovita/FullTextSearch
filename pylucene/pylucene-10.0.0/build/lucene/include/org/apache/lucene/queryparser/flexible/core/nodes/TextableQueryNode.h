#ifndef org_apache_lucene_queryparser_flexible_core_nodes_TextableQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_TextableQueryNode_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
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

              class TextableQueryNode : public ::java::lang::Object {
               public:
                enum {
                  mid_getText_373f0038978f926b,
                  mid_setText_5ed8eb2e3024c663,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TextableQueryNode(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TextableQueryNode(const TextableQueryNode& obj) : ::java::lang::Object(obj) {}

                ::java::lang::CharSequence getText() const;
                void setText(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(TextableQueryNode);
              extern PyTypeObject *PY_TYPE(TextableQueryNode);

              class t_TextableQueryNode {
              public:
                PyObject_HEAD
                TextableQueryNode object;
                static PyObject *wrap_Object(const TextableQueryNode&);
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
