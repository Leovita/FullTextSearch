#ifndef org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector_H
#define org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector_H

#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexWriter$IndexTermSelector.h"

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

          class VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector : public ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector {
           public:
            enum {
              mid_init$_645c25455f5b9b1c,
              mid_isIndexTerm_3d5cf943ed621c71,
              mid_newField_4d7193cb5c8dc4a1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector(jobject obj) : ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector(const VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector& obj) : ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector(obj) {}

            VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector(jint, jint);

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
          extern PyType_Def PY_TYPE_DEF(VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector);
          extern PyTypeObject *PY_TYPE(VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector);

          class t_VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector {
          public:
            PyObject_HEAD
            VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector object;
            static PyObject *wrap_Object(const VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector&);
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
