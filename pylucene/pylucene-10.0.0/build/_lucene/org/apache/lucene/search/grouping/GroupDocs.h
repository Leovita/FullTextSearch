#ifndef org_apache_lucene_search_grouping_GroupDocs_H
#define org_apache_lucene_search_grouping_GroupDocs_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TotalHits;
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupDocs : public ::java::lang::Record {
           public:
            enum {
              mid_init$_f588404699bb24a9,
              mid_equals_00d17418847797d4,
              mid_groupSortValues_1e688954528bc160,
              mid_groupValue_4819806f62f1360a,
              mid_hashCode_bd89ce15dad49192,
              mid_maxScore_8b62236f0e4d0dbc,
              mid_score_8b62236f0e4d0dbc,
              mid_scoreDocs_5d8e89df11fa3e90,
              mid_toString_e7df854526d67fa3,
              mid_totalHits_efd5458a8db43710,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupDocs(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupDocs(const GroupDocs& obj) : ::java::lang::Record(obj) {}

            GroupDocs(jfloat, jfloat, const ::org::apache::lucene::search::TotalHits &, const JArray< ::org::apache::lucene::search::ScoreDoc > &, const ::java::lang::Object &, const JArray< ::java::lang::Object > &);

            jboolean equals(const ::java::lang::Object &) const;
            JArray< ::java::lang::Object > groupSortValues() const;
            ::java::lang::Object groupValue() const;
            jint hashCode() const;
            jfloat maxScore() const;
            jfloat score() const;
            JArray< ::org::apache::lucene::search::ScoreDoc > scoreDocs() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::search::TotalHits totalHits() const;
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
          extern PyType_Def PY_TYPE_DEF(GroupDocs);
          extern PyTypeObject *PY_TYPE(GroupDocs);

          class t_GroupDocs {
          public:
            PyObject_HEAD
            GroupDocs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GroupDocs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupDocs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupDocs&, PyTypeObject *);
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
