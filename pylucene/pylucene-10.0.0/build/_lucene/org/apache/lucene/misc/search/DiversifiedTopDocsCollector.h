#ifndef org_apache_lucene_misc_search_DiversifiedTopDocsCollector_H
#define org_apache_lucene_misc_search_DiversifiedTopDocsCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class LeafCollector;
      }
      namespace misc {
        namespace search {
          class DiversifiedTopDocsCollector$ScoreDocKey;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class DiversifiedTopDocsCollector : public ::org::apache::lucene::search::TopDocsCollector {
           public:
            enum {
              mid_init$_645c25455f5b9b1c,
              mid_getLeafCollector_0a34433e6da38be9,
              mid_scoreMode_23e7061dcdc84768,
              mid_newTopDocs_d4fc5c39fd7326b6,
              mid_insert_b502b4935cd622d4,
              mid_getKeys_e3170d0ac23ceefa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiversifiedTopDocsCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiversifiedTopDocsCollector(const DiversifiedTopDocsCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

            DiversifiedTopDocsCollector(jint, jint);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(DiversifiedTopDocsCollector);
          extern PyTypeObject *PY_TYPE(DiversifiedTopDocsCollector);

          class t_DiversifiedTopDocsCollector {
          public:
            PyObject_HEAD
            DiversifiedTopDocsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DiversifiedTopDocsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DiversifiedTopDocsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DiversifiedTopDocsCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
