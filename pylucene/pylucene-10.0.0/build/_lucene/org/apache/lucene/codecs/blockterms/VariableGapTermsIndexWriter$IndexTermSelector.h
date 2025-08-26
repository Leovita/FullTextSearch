#ifndef org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter$IndexTermSelector_H
#define org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter$IndexTermSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
      }
      namespace codecs {
        class TermStats;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class VariableGapTermsIndexWriter$IndexTermSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_isIndexTerm_3d5cf943ed621c71,
              mid_newField_4d7193cb5c8dc4a1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableGapTermsIndexWriter$IndexTermSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VariableGapTermsIndexWriter$IndexTermSelector(const VariableGapTermsIndexWriter$IndexTermSelector& obj) : ::java::lang::Object(obj) {}

            VariableGapTermsIndexWriter$IndexTermSelector();

            jboolean isIndexTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::codecs::TermStats &) const;
            void newField(const ::org::apache::lucene::index::FieldInfo &) const;
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
      namespace codecs {
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(VariableGapTermsIndexWriter$IndexTermSelector);
          extern PyTypeObject *PY_TYPE(VariableGapTermsIndexWriter$IndexTermSelector);

          class t_VariableGapTermsIndexWriter$IndexTermSelector {
          public:
            PyObject_HEAD
            VariableGapTermsIndexWriter$IndexTermSelector object;
            static PyObject *wrap_Object(const VariableGapTermsIndexWriter$IndexTermSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
