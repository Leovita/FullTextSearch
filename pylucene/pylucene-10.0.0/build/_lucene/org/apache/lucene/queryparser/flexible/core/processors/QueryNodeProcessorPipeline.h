#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class List;
    class ListIterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class QueryConfigHandler;
            }
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeException;
            namespace processors {
              class QueryNodeProcessor;
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
            namespace processors {

              class QueryNodeProcessorPipeline : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_init$_0fc7dbcdbf111f0f,
                  mid_add_beb2e06d3c15110a,
                  mid_add_8a126ae55218bc0e,
                  mid_addAll_f2a1f31c5865e20d,
                  mid_addAll_30cee388a7b048af,
                  mid_clear_3720c61b0679eb3e,
                  mid_contains_570b5248a6da3ef6,
                  mid_containsAll_f2a1f31c5865e20d,
                  mid_get_d53b7e48e3271a14,
                  mid_getQueryConfigHandler_30bdf25ce42207ac,
                  mid_indexOf_657656e6a597f732,
                  mid_isEmpty_947277eca0748c4e,
                  mid_iterator_0db4c76ff7ee995b,
                  mid_lastIndexOf_657656e6a597f732,
                  mid_listIterator_0f4ac4d253da0dce,
                  mid_listIterator_c5b65026385ab4af,
                  mid_process_8ca6e32fcbac6a62,
                  mid_remove_d53b7e48e3271a14,
                  mid_remove_570b5248a6da3ef6,
                  mid_removeAll_f2a1f31c5865e20d,
                  mid_retainAll_f2a1f31c5865e20d,
                  mid_set_7646b9b2faff9f01,
                  mid_setQueryConfigHandler_0fc7dbcdbf111f0f,
                  mid_size_20fbf7565993c3d7,
                  mid_subList_3690552717f6ec88,
                  mid_toArray_e6b839682a4610a6,
                  mid_toArray_1794d6b866766560,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessorPipeline(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorPipeline(const QueryNodeProcessorPipeline& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorPipeline();
                QueryNodeProcessorPipeline(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                jboolean add(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void add(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                jboolean addAll(const ::java::util::Collection &) const;
                jboolean addAll(jint, const ::java::util::Collection &) const;
                void clear() const;
                jboolean contains(const ::java::lang::Object &) const;
                jboolean containsAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor get(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                jint indexOf(const ::java::lang::Object &) const;
                jboolean isEmpty() const;
                ::java::util::Iterator iterator() const;
                jint lastIndexOf(const ::java::lang::Object &) const;
                ::java::util::ListIterator listIterator() const;
                ::java::util::ListIterator listIterator(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor remove(jint) const;
                jboolean remove(const ::java::lang::Object &) const;
                jboolean removeAll(const ::java::util::Collection &) const;
                jboolean retainAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor set(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
                jint size() const;
                ::java::util::List subList(jint, jint) const;
                JArray< ::java::lang::Object > toArray() const;
                JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
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
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(QueryNodeProcessorPipeline);
              extern PyTypeObject *PY_TYPE(QueryNodeProcessorPipeline);

              class t_QueryNodeProcessorPipeline {
              public:
                PyObject_HEAD
                QueryNodeProcessorPipeline object;
                static PyObject *wrap_Object(const QueryNodeProcessorPipeline&);
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
