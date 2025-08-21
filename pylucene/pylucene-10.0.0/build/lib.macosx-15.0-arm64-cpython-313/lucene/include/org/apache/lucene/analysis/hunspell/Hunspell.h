#ifndef org_apache_lucene_analysis_hunspell_Hunspell_H
#define org_apache_lucene_analysis_hunspell_Hunspell_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class Dictionary;
          class AffixedWord;
          class TimeoutPolicy;
          class SuggestionTimeoutException;
          class EntrySuggestion;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Runnable;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Hunspell : public ::java::lang::Object {
           public:
            enum {
              mid_init$_25851638115dd159,
              mid_init$_82429c0399f23892,
              mid_analyzeSimpleWord_8eaa545bb5a79de3,
              mid_compress_51c205eb479a03a8,
              mid_getAllWordForms_8eaa545bb5a79de3,
              mid_getRoots_8eaa545bb5a79de3,
              mid_spell_4a13a663b5c11133,
              mid_suggest_8eaa545bb5a79de3,
              mid_suggest_f177eee3a5a0ff21,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Hunspell(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Hunspell(const Hunspell& obj) : ::java::lang::Object(obj) {}

            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &, const ::org::apache::lucene::analysis::hunspell::TimeoutPolicy &, const ::java::lang::Runnable &);

            ::java::util::List analyzeSimpleWord(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::hunspell::EntrySuggestion compress(const ::java::util::List &) const;
            ::java::util::List getAllWordForms(const ::java::lang::String &) const;
            ::java::util::List getRoots(const ::java::lang::String &) const;
            jboolean spell(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &, jlong) const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Hunspell);
          extern PyTypeObject *PY_TYPE(Hunspell);

          class t_Hunspell {
          public:
            PyObject_HEAD
            Hunspell object;
            static PyObject *wrap_Object(const Hunspell&);
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
