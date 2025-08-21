#ifndef org_apache_lucene_util_hnsw_HnswBuilder_H
#define org_apache_lucene_util_hnsw_HnswBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class OnHeapHnswGraph;
        }
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class HnswBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addGraphNode_540b2b23d51b1efd,
              mid_build_9fd6d69296ace9c0,
              mid_getCompletedGraph_7f2a628e64b61b56,
              mid_getGraph_7f2a628e64b61b56,
              mid_setInfoStream_3b3e574f321bdf38,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswBuilder(const HnswBuilder& obj) : ::java::lang::Object(obj) {}

            void addGraphNode(jint) const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph build(jint) const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph getCompletedGraph() const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph getGraph() const;
            void setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(HnswBuilder);
          extern PyTypeObject *PY_TYPE(HnswBuilder);

          class t_HnswBuilder {
          public:
            PyObject_HEAD
            HnswBuilder object;
            static PyObject *wrap_Object(const HnswBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
