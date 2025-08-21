#ifndef org_apache_lucene_search_grouping_GroupReducer_H
#define org_apache_lucene_search_grouping_GroupReducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        namespace grouping {
          class SearchGroup;
        }
        class Collector;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace search {
        namespace grouping {

          class GroupReducer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_collect_a115297e4da7fe13,
              mid_getCollector_c4abc5ff357128fa,
              mid_needsScores_947277eca0748c4e,
              mid_setGroups_40eba2cff967cc45,
              mid_setNextReader_b7b06dce0a4097ed,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_newCollector_4251c3f1d651d6d9,
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
