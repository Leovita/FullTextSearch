#ifndef org_apache_lucene_queryparser_flexible_core_nodes_SlopQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_SlopQueryNode_H

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
              class QueryNode;
            }
          }
        }
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
          namespace core {
            namespace nodes {

              class SlopQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_5dcf551fc9fc7cd9,
                  mid_cloneTree_7ba6641ec93d332a,
                  mid_getChild_7ba6641ec93d332a,
                  mid_getField_373f0038978f926b,
                  mid_getValue_20fbf7565993c3d7,
                  mid_setField_5ed8eb2e3024c663,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SlopQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SlopQueryNode(const SlopQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                SlopQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &, jint);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getChild() const;
                ::java::lang::CharSequence getField() const;
                jint getValue() const;
                void setField(const ::java::lang::CharSequence &) const;
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
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(SlopQueryNode);
              extern PyTypeObject *PY_TYPE(SlopQueryNode);

              class t_SlopQueryNode {
              public:
                PyObject_HEAD
                SlopQueryNode object;
                static PyObject *wrap_Object(const SlopQueryNode&);
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
