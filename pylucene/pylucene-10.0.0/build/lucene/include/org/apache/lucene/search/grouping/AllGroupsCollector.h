#ifndef org_apache_lucene_search_grouping_AllGroupsCollector_H
#define org_apache_lucene_search_grouping_AllGroupsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupSelector;
        }
        class ScoreMode;
        class Scorable;
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

          class AllGroupsCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_dddaabc7d6744e95,
              mid_collect_8226bd0b0fc13dba,
              mid_getGroupCount_bd89ce15dad49192,
              mid_getGroups_4a269b968b3a511f,
              mid_scoreMode_23e7061dcdc84768,
              mid_setScorer_c06bdf7d53c6460a,
              mid_doSetNextReader_32243afefe6b151f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AllGroupsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AllGroupsCollector(const AllGroupsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            AllGroupsCollector(const ::org::apache::lucene::search::grouping::GroupSelector &);

            void collect(jint) const;
            jint getGroupCount() const;
            ::java::util::Collection getGroups() const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
          extern PyType_Def PY_TYPE_DEF(AllGroupsCollector);
          extern PyTypeObject *PY_TYPE(AllGroupsCollector);

          class t_AllGroupsCollector {
          public:
            PyObject_HEAD
            AllGroupsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AllGroupsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AllGroupsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AllGroupsCollector&, PyTypeObject *);
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
