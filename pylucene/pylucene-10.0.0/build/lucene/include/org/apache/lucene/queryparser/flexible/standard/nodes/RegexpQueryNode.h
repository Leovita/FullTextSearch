#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              class RegexpQueryNode;
            }
          }
          namespace core {
            namespace nodes {
              class TextableQueryNode;
              class FieldableNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
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
    class String;
    class CharSequence;
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
                  mid_init$_8603315685815f47,
                  mid_init$_44298a318b5c73fe,
                  mid_cloneTree_64fe86edc1c7449d,
                  mid_getField_f2e5418fe0d66c69,
                  mid_getFieldAsString_e7df854526d67fa3,
                  mid_getText_f2e5418fe0d66c69,
                  mid_setField_fe2ab7d27aa3fe1a,
                  mid_setText_fe2ab7d27aa3fe1a,
                  mid_textToBytesRef_adbedbc1fa61c358,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
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
