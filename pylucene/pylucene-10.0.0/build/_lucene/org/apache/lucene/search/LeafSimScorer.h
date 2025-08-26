#ifndef org_apache_lucene_search_LeafSimScorer_H
#define org_apache_lucene_search_LeafSimScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        namespace similarities {
          class Similarity$SimScorer;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LeafSimScorer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2d5f2d8a8e41c577,
            mid_explain_1e4eec8dc5824a4a,
            mid_getSimScorer_6ef87505d5a49f93,
            mid_score_cb697677f8bf71f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafSimScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafSimScorer(const LeafSimScorer& obj) : ::java::lang::Object(obj) {}

          LeafSimScorer(const ::org::apache::lucene::search::similarities::Similarity$SimScorer &, const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &, jboolean);

          ::org::apache::lucene::search::Explanation explain(jint, const ::org::apache::lucene::search::Explanation &) const;
          ::org::apache::lucene::search::similarities::Similarity$SimScorer getSimScorer() const;
          jfloat score(jint, jfloat) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LeafSimScorer);
        extern PyTypeObject *PY_TYPE(LeafSimScorer);

        class t_LeafSimScorer {
        public:
          PyObject_HEAD
          LeafSimScorer object;
          static PyObject *wrap_Object(const LeafSimScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
