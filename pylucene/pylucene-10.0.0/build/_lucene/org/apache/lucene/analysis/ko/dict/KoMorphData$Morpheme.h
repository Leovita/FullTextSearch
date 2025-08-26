#ifndef org_apache_lucene_analysis_ko_dict_KoMorphData$Morpheme_H
#define org_apache_lucene_analysis_ko_dict_KoMorphData$Morpheme_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class KoMorphData$Morpheme : public ::java::lang::Record {
             public:
              enum {
                mid_init$_86059803c175e8a1,
                mid_equals_00d17418847797d4,
                mid_hashCode_bd89ce15dad49192,
                mid_posTag_2a8a370cf50ce28f,
                mid_surfaceForm_e7df854526d67fa3,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KoMorphData$Morpheme(jobject obj) : ::java::lang::Record(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KoMorphData$Morpheme(const KoMorphData$Morpheme& obj) : ::java::lang::Record(obj) {}

              KoMorphData$Morpheme(const ::org::apache::lucene::analysis::ko::POS$Tag &, const ::java::lang::String &);

              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              ::org::apache::lucene::analysis::ko::POS$Tag posTag() const;
              ::java::lang::String surfaceForm() const;
              ::java::lang::String toString() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(KoMorphData$Morpheme);
            extern PyTypeObject *PY_TYPE(KoMorphData$Morpheme);

            class t_KoMorphData$Morpheme {
            public:
              PyObject_HEAD
              KoMorphData$Morpheme object;
              static PyObject *wrap_Object(const KoMorphData$Morpheme&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
