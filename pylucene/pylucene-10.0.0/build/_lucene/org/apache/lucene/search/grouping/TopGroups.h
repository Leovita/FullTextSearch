#ifndef org_apache_lucene_search_grouping_TopGroups_H
#define org_apache_lucene_search_grouping_TopGroups_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class TopGroups$ScoreMergeMode;
          class TopGroups;
          class GroupDocs;
        }
        class SortField;
        class Sort;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class TopGroups : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7c00819063e6b25b,
              mid_init$_0389d4a798de13a4,
              mid_merge_0e6019692f8319f9,
              max_mid
            };

            enum {
              fid_groupSort,
              fid_groups,
              fid_maxScore,
              fid_totalGroupCount,
              fid_totalGroupedHitCount,
              fid_totalHitCount,
              fid_withinGroupSort,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TopGroups(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TopGroups(const TopGroups& obj) : ::java::lang::Object(obj) {}

            JArray< ::org::apache::lucene::search::SortField > _get_groupSort() const;
            JArray< ::org::apache::lucene::search::grouping::GroupDocs > _get_groups() const;
            jfloat _get_maxScore() const;
            ::java::lang::Integer _get_totalGroupCount() const;
            jint _get_totalGroupedHitCount() const;
            jint _get_totalHitCount() const;
            JArray< ::org::apache::lucene::search::SortField > _get_withinGroupSort() const;

            TopGroups(const TopGroups &, const ::java::lang::Integer &);
            TopGroups(const JArray< ::org::apache::lucene::search::SortField > &, const JArray< ::org::apache::lucene::search::SortField > &, jint, jint, const JArray< ::org::apache::lucene::search::grouping::GroupDocs > &, jfloat);

            static TopGroups merge(const JArray< TopGroups > &, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Sort &, jint, jint, const ::org::apache::lucene::search::grouping::TopGroups$ScoreMergeMode &);
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
          extern PyType_Def PY_TYPE_DEF(TopGroups);
          extern PyTypeObject *PY_TYPE(TopGroups);

          class t_TopGroups {
          public:
            PyObject_HEAD
            TopGroups object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TopGroups *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TopGroups&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TopGroups&, PyTypeObject *);
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
