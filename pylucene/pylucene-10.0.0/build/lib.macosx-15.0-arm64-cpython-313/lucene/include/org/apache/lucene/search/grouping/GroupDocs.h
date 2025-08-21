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
    class Class;
    class String;
    class Object;
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
              mid_init$_1a9e86d88854d3fe,
              mid_equals_570b5248a6da3ef6,
              mid_groupSortValues_e6b839682a4610a6,
              mid_groupValue_5655ed8670534604,
              mid_hashCode_20fbf7565993c3d7,
              mid_maxScore_9b6c3480dac00edf,
              mid_score_9b6c3480dac00edf,
              mid_scoreDocs_320acf0038616c03,
              mid_toString_09a7afff1868fc5e,
              mid_totalHits_9c820a557945e5d3,
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
