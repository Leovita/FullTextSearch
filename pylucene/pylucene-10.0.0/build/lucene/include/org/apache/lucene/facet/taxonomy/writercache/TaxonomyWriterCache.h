#ifndef org_apache_lucene_facet_taxonomy_writercache_TaxonomyWriterCache_H
#define org_apache_lucene_facet_taxonomy_writercache_TaxonomyWriterCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {

            class TaxonomyWriterCache : public ::java::lang::Object {
             public:
              enum {
                mid_clear_e7bdbe105ce1bafb,
                mid_close_e7bdbe105ce1bafb,
                mid_get_36dd33e0173c4244,
                mid_isFull_9aa4f33e82ea333f,
                mid_put_44521ca0d7cb4d7d,
                mid_size_bd89ce15dad49192,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TaxonomyWriterCache(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TaxonomyWriterCache(const TaxonomyWriterCache& obj) : ::java::lang::Object(obj) {}

              void clear() const;
              void close() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              jboolean isFull() const;
              jboolean put(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jint size() const;
            };
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
      namespace facet {
        namespace taxonomy {
          namespace writercache {
            extern PyType_Def PY_TYPE_DEF(TaxonomyWriterCache);
            extern PyTypeObject *PY_TYPE(TaxonomyWriterCache);

            class t_TaxonomyWriterCache {
            public:
              PyObject_HEAD
              TaxonomyWriterCache object;
              static PyObject *wrap_Object(const TaxonomyWriterCache&);
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

#endif
