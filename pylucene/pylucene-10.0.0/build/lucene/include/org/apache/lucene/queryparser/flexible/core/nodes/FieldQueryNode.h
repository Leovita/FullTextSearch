#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class CloneNotSupportedException;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class TextableQueryNode;
              class FieldQueryNode;
              class FieldValuePairQueryNode;
            }
            namespace parser {
              class EscapeQuerySyntax;
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

              class FieldQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_44298a318b5c73fe,
                  mid_cloneTree_5bde42530638694a,
                  mid_getBegin_bd89ce15dad49192,
                  mid_getEnd_bd89ce15dad49192,
                  mid_getField_f2e5418fe0d66c69,
                  mid_getFieldAsString_e7df854526d67fa3,
                  mid_getPositionIncrement_bd89ce15dad49192,
                  mid_getText_f2e5418fe0d66c69,
                  mid_getTextAsString_e7df854526d67fa3,
                  mid_getValue_f2e5418fe0d66c69,
                  mid_setBegin_8226bd0b0fc13dba,
                  mid_setEnd_8226bd0b0fc13dba,
                  mid_setField_fe2ab7d27aa3fe1a,
                  mid_setPositionIncrement_8226bd0b0fc13dba,
                  mid_setText_fe2ab7d27aa3fe1a,
                  mid_setValue_fe2ab7d27aa3fe1a,
                  mid_toQueryString_5260f1dc7a86fc8d,
                  mid_toString_e7df854526d67fa3,
                  mid_getTermEscaped_5260f1dc7a86fc8d,
                  mid_getTermEscapeQuoted_5260f1dc7a86fc8d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldQueryNode(const FieldQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                FieldQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                FieldQueryNode cloneTree() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getPositionIncrement() const;
                ::java::lang::CharSequence getText() const;
                ::java::lang::String getTextAsString() const;
                ::java::lang::CharSequence getValue() const;
                void setBegin(jint) const;
                void setEnd(jint) const;
                void setField(const ::java::lang::CharSequence &) const;
                void setPositionIncrement(jint) const;
                void setText(const ::java::lang::CharSequence &) const;
                void setValue(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(FieldQueryNode);
              extern PyTypeObject *PY_TYPE(FieldQueryNode);

              class t_FieldQueryNode {
              public:
                PyObject_HEAD
                FieldQueryNode object;
                static PyObject *wrap_Object(const FieldQueryNode&);
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
