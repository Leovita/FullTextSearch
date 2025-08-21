#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class EscapeQuerySyntax;
            }
            namespace nodes {
              class FieldableNode;
              class TextableQueryNode;
            }
          }
          namespace standard {
            namespace nodes {
              class RegexpQueryNode;
            }
          }
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class CloneNotSupportedException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {

              class RegexpQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_25d608db26253320,
                  mid_init$_b974a1b06f039814,
                  mid_cloneTree_4858e367e2f98412,
                  mid_getField_373f0038978f926b,
                  mid_getFieldAsString_09a7afff1868fc5e,
                  mid_getText_373f0038978f926b,
                  mid_setField_5ed8eb2e3024c663,
                  mid_setText_5ed8eb2e3024c663,
                  mid_textToBytesRef_9740fddd1c7df148,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RegexpQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RegexpQueryNode(const RegexpQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                RegexpQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &);
                RegexpQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                RegexpQueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::java::lang::CharSequence getText() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setText(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::util::BytesRef textToBytesRef() const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
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
          namespace standard {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(RegexpQueryNode);
              extern PyTypeObject *PY_TYPE(RegexpQueryNode);

              class t_RegexpQueryNode {
              public:
                PyObject_HEAD
                RegexpQueryNode object;
                static PyObject *wrap_Object(const RegexpQueryNode&);
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
