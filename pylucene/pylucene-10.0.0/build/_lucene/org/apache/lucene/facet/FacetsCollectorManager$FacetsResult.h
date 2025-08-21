#ifndef org_apache_lucene_facet_FacetsCollectorManager$FacetsResult_H
#define org_apache_lucene_facet_FacetsCollectorManager$FacetsResult_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
      }
      namespace search {
        class TopDocs;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollectorManager$FacetsResult : public ::java::lang::Record {
         public:
          enum {
            mid_init$_d514bb3795a7bdff,
            mid_equals_570b5248a6da3ef6,
            mid_facetsCollector_02cd9b76c139803e,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_topDocs_a61875f39685c639,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollectorManager$FacetsResult(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollectorManager$FacetsResult(const FacetsCollectorManager$FacetsResult& obj) : ::java::lang::Record(obj) {}

          FacetsCollectorManager$FacetsResult(const ::org::apache::lucene::search::TopDocs &, const ::org::apache::lucene::facet::FacetsCollector &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::facet::FacetsCollector facetsCollector() const;
          jint hashCode() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollectorManager$FacetsResult);
        extern PyTypeObject *PY_TYPE(FacetsCollectorManager$FacetsResult);

        class t_FacetsCollectorManager$FacetsResult {
        public:
          PyObject_HEAD
          FacetsCollectorManager$FacetsResult object;
          static PyObject *wrap_Object(const FacetsCollectorManager$FacetsResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
