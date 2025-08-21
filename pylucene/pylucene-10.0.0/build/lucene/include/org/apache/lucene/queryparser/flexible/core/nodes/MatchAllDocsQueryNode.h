#ifndef org_apache_lucene_queryparser_flexible_core_nodes_MatchAllDocsQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_MatchAllDocsQueryNode_H

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
              class MatchAllDocsQueryNode;
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

              class MatchAllDocsQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_cloneTree_11b521d560d5008f,
                  mid_toQueryString_d4d5dbebf21f5529,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MatchAllDocsQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MatchAllDocsQueryNode(const MatchAllDocsQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                MatchAllDocsQueryNode();

                MatchAllDocsQueryNode cloneTree() const;
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
              extern PyType_Def PY_TYPE_DEF(MatchAllDocsQueryNode);
              extern PyTypeObject *PY_TYPE(MatchAllDocsQueryNode);

              class t_MatchAllDocsQueryNode {
              public:
                PyObject_HEAD
                MatchAllDocsQueryNode object;
                static PyObject *wrap_Object(const MatchAllDocsQueryNode&);
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
