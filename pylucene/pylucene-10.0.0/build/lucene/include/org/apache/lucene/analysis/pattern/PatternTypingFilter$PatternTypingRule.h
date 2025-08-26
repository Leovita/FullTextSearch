#ifndef org_apache_lucene_analysis_pattern_PatternTypingFilter$PatternTypingRule_H
#define org_apache_lucene_analysis_pattern_PatternTypingFilter$PatternTypingRule_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternTypingFilter$PatternTypingRule : public ::java::lang::Record {
           public:
            enum {
              mid_init$_cbb842cec19e35e4,
              mid_equals_00d17418847797d4,
              mid_flags_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_pattern_9bea244ff732f2bf,
              mid_toString_e7df854526d67fa3,
              mid_typeTemplate_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTypingFilter$PatternTypingRule(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTypingFilter$PatternTypingRule(const PatternTypingFilter$PatternTypingRule& obj) : ::java::lang::Record(obj) {}

            PatternTypingFilter$PatternTypingRule(const ::java::util::regex::Pattern &, jint, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            jint flags() const;
            jint hashCode() const;
            ::java::util::regex::Pattern pattern() const;
            ::java::lang::String toString() const;
            ::java::lang::String typeTemplate() const;
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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternTypingFilter$PatternTypingRule);
          extern PyTypeObject *PY_TYPE(PatternTypingFilter$PatternTypingRule);

          class t_PatternTypingFilter$PatternTypingRule {
          public:
            PyObject_HEAD
            PatternTypingFilter$PatternTypingRule object;
            static PyObject *wrap_Object(const PatternTypingFilter$PatternTypingRule&);
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
