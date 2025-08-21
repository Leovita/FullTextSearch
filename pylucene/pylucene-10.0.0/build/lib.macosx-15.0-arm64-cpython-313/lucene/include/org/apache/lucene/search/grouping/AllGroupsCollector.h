#ifndef org_apache_lucene_search_grouping_AllGroupsCollector_H
#define org_apache_lucene_search_grouping_AllGroupsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class ScoreMode;
        namespace grouping {
          class GroupSelector;
        }
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

          class AllGroupsCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_665eebd6bb04e638,
              mid_collect_540b2b23d51b1efd,
              mid_getGroupCount_20fbf7565993c3d7,
              mid_getGroups_aa58b3beec16cbbd,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_doSetNextReader_b7b06dce0a4097ed,
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
