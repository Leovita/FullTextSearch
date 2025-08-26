#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class ListIterator;
    class Collection;
    class List;
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
            namespace processors {
              class QueryNodeProcessor;
            }
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
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
                  mid_init$_e7bdbe105ce1bafb,
                  mid_init$_f8d3957fd2e3377b,
                  mid_add_f79db5877eb974d3,
                  mid_add_d592f8e657c98163,
                  mid_addAll_155d0ed876869448,
                  mid_addAll_6a33d3084931e945,
                  mid_clear_e7bdbe105ce1bafb,
                  mid_contains_00d17418847797d4,
                  mid_containsAll_155d0ed876869448,
                  mid_get_b007bf603176e693,
                  mid_getQueryConfigHandler_2a2d77f833f4beaf,
                  mid_indexOf_3b738b91667a06c2,
                  mid_isEmpty_9aa4f33e82ea333f,
                  mid_iterator_c7985fafdcf40e83,
                  mid_lastIndexOf_3b738b91667a06c2,
                  mid_listIterator_f5b10a8957c7e8ce,
                  mid_listIterator_a1b8e40853ea22b0,
                  mid_process_4b838b17650067cf,
                  mid_remove_b007bf603176e693,
                  mid_remove_00d17418847797d4,
                  mid_removeAll_155d0ed876869448,
                  mid_retainAll_155d0ed876869448,
                  mid_set_9ad945cff4f2d2d4,
                  mid_setQueryConfigHandler_f8d3957fd2e3377b,
                  mid_size_bd89ce15dad49192,
                  mid_subList_6d7644d6c0697519,
                  mid_toArray_1e688954528bc160,
                  mid_toArray_0b4a993b49b6d8e8,
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
