#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Function;
      class BiFunction;
      class BiConsumer;
    }
    class Map$Entry;
    class Collection;
    class Set;
    class InvalidPropertiesFormatException;
    class Enumeration;
    class Map;
  }
  namespace io {
    class IOException;
    class Writer;
    class PrintStream;
    class OutputStream;
    class PrintWriter;
    class InputStream;
    class Reader;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Properties : public ::java::util::Hashtable {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_8226bd0b0fc13dba,
        mid_clear_e7bdbe105ce1bafb,
        mid_clone_4819806f62f1360a,
        mid_compute_d2596364fffa973e,
        mid_computeIfAbsent_9ed5cc5abc5e630e,
        mid_computeIfPresent_d2596364fffa973e,
        mid_contains_00d17418847797d4,
        mid_containsKey_00d17418847797d4,
        mid_containsValue_00d17418847797d4,
        mid_elements_c0dcea0e1246b77b,
        mid_entrySet_79131c6bbcf08916,
        mid_equals_00d17418847797d4,
        mid_forEach_309feadaabdabe33,
        mid_get_e2c45b124c12f4ec,
        mid_getOrDefault_b3b175dfe26d2c44,
        mid_getProperty_fef9c036acf290a9,
        mid_getProperty_3bdb499546f6bd60,
        mid_hashCode_bd89ce15dad49192,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_keySet_79131c6bbcf08916,
        mid_keys_c0dcea0e1246b77b,
        mid_list_922e82480ddcbcc4,
        mid_list_f393b52595696eb1,
        mid_load_da97eaa7d893a93a,
        mid_load_89ab2bee9aa84b00,
        mid_loadFromXML_da97eaa7d893a93a,
        mid_merge_9071885bacc97265,
        mid_propertyNames_c0dcea0e1246b77b,
        mid_put_b3b175dfe26d2c44,
        mid_putAll_6a7e23584beb7c0f,
        mid_putIfAbsent_b3b175dfe26d2c44,
        mid_remove_e2c45b124c12f4ec,
        mid_remove_0596e01f2cdb5588,
        mid_replace_b3b175dfe26d2c44,
        mid_replace_dda5dc55054f9d64,
        mid_replaceAll_ec29d14cf1227d89,
        mid_save_dbd9e96eff9ac9b6,
        mid_setProperty_d3d8eff0e0846e60,
        mid_size_bd89ce15dad49192,
        mid_store_dbd9e96eff9ac9b6,
        mid_store_1eb5bce76753a806,
        mid_storeToXML_dbd9e96eff9ac9b6,
        mid_storeToXML_9a796ca155acdfbb,
        mid_stringPropertyNames_79131c6bbcf08916,
        mid_toString_e7df854526d67fa3,
        mid_values_4a269b968b3a511f,
        mid_rehash_e7bdbe105ce1bafb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Properties(jobject obj) : ::java::util::Hashtable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Properties(const Properties& obj) : ::java::util::Hashtable(obj) {}

      Properties();
      Properties(jint);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Enumeration elements() const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::String getProperty(const ::java::lang::String &) const;
      ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      void list(const ::java::io::PrintStream &) const;
      void list(const ::java::io::PrintWriter &) const;
      void load(const ::java::io::InputStream &) const;
      void load(const ::java::io::Reader &) const;
      void loadFromXML(const ::java::io::InputStream &) const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::util::Enumeration propertyNames() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      void save(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      ::java::lang::Object setProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      jint size() const;
      void store(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void store(const ::java::io::Writer &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &, const ::java::lang::String &) const;
      ::java::util::Set stringPropertyNames() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Properties);
    extern PyTypeObject *PY_TYPE(Properties);

    class t_Properties {
    public:
      PyObject_HEAD
      Properties object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Properties *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Properties&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Properties&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
