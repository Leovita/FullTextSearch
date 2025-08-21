#ifndef org_apache_lucene_misc_search_DiversifiedTopDocsCollector_H
#define org_apache_lucene_misc_search_DiversifiedTopDocsCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class ScoreMode;
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
              mid_init$_e13cff512ebda969,
              mid_getLeafCollector_aca3f888603431e1,
              mid_scoreMode_45dfdcf7e901559d,
              mid_newTopDocs_f6010540414086f3,
              mid_insert_58ff3c672fc8d5cb,
              mid_getKeys_af47394cc631abf9,
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
