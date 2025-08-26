#ifndef org_apache_lucene_search_grouping_GroupReducer_H
#define org_apache_lucene_search_grouping_GroupReducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
        }
        class Scorable;
        class Collector;
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
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupReducer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_collect_115cdf0409fcf583,
              mid_getCollector_656b42a32f1119de,
              mid_needsScores_9aa4f33e82ea333f,
              mid_setGroups_b5398b431eb321fb,
              mid_setNextReader_32243afefe6b151f,
              mid_setScorer_c06bdf7d53c6460a,
              mid_newCollector_6c5ef8f878eeb110,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupReducer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupReducer(const GroupReducer& obj) : ::java::lang::Object(obj) {}

            GroupReducer();

            void collect(const ::java::lang::Object &, jint) const;
            ::org::apache::lucene::search::Collector getCollector(const ::java::lang::Object &) const;
            jboolean needsScores() const;
            void setGroups(const ::java::util::Collection &) const;
            void setNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupReducer);
          extern PyTypeObject *PY_TYPE(GroupReducer);

          class t_GroupReducer {
          public:
            PyObject_HEAD
            GroupReducer object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_GroupReducer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupReducer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupReducer&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
