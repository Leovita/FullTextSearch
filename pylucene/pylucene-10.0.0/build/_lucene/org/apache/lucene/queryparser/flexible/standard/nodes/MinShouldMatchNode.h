#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_MinShouldMatchNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_MinShouldMatchNode_H

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
              class GroupQueryNode;
            }
          }
        }
      }
    }
  }
}
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
          namespace standard {
            namespace nodes {

              class MinShouldMatchNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_03612dc0bed6222b,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  max_mid
                };

                enum {
                  fid_groupQueryNode,
                  fid_minShouldMatch,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MinShouldMatchNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MinShouldMatchNode(const MinShouldMatchNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                ::org::apache::lucene::queryparser::flexible::core::nodes::GroupQueryNode _get_groupQueryNode() const;
                jint _get_minShouldMatch() const;

                MinShouldMatchNode(jint, const ::org::apache::lucene::queryparser::flexible::core::nodes::GroupQueryNode &);

                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
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
              extern PyType_Def PY_TYPE_DEF(MinShouldMatchNode);
              extern PyTypeObject *PY_TYPE(MinShouldMatchNode);

              class t_MinShouldMatchNode {
              public:
                PyObject_HEAD
                MinShouldMatchNode object;
                static PyObject *wrap_Object(const MinShouldMatchNode&);
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
