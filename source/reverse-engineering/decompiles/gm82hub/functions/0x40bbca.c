// rea decompile_all
// name: FUN_0040bbca
// address: 0x40bbca
// body: available
// range: 0x40bbca-0x40bde6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


FARPROC FUN_0040bbca(void)

{
  uint *puVar1;
  HMODULE hLibModule;
  int *piVar2;
  int iVar3;
  FARPROC pFVar4;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 local_34;
  int local_30;
  int *local_2c;
  LPCSTR local_28;
  uint local_24;
  LPCSTR local_20;
  HMODULE local_1c;
  FARPROC local_18;
  DWORD local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;

  FUN_0040bac8();
  local_34 = 0x24;
  local_30 = in_stack_00000004;
  local_2c = in_stack_00000008;
  local_28 = *(LPCSTR *)(in_stack_00000004 + 4);
  hLibModule = *(HMODULE *)(in_stack_00000004 + 8);
  local_8 = FUN_0040bb46();
  puVar1 = (uint *)(local_8 * 4 + *(int *)(in_stack_00000004 + 0x10));
  local_24 = (uint)((*puVar1 & 0x80000000) == 0);
  if (local_24 == 0) {
    local_20 = (LPCSTR)(*puVar1 & 0xffff);
  }
  else {
    local_20 = (LPCSTR)(*puVar1 + 2);
  }
  pFVar4 = (FARPROC)0x0;
  if ((DAT_0067ca24 == (code *)0x0) || (pFVar4 = (FARPROC)(*DAT_0067ca24)(), pFVar4 == (FARPROC)0x0)
     ) {
    if (hLibModule == (HMODULE)0x0) {
      if (DAT_0067ca24 != (code *)0x0) {
        hLibModule = (HMODULE)(*DAT_0067ca24)();
      }
      if (hLibModule == (HMODULE)0x0) {
        hLibModule = LoadLibraryA(local_28);
      }
      if (hLibModule == (HMODULE)0x0) {
        local_14 = GetLastError();
        if (DAT_0067ca20 != (code *)0x0) {
          hLibModule = (HMODULE)(*DAT_0067ca20)();
        }
        if (hLibModule == (HMODULE)0x0) {
          local_c = &local_34;
          RaiseException(0xc0fb007e,0,1,(ULONG_PTR *)&local_c);
          return local_18;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068cc24);
      if (*(int *)(in_stack_00000004 + 8) == 0) {
        FUN_0040bae4();
        *(HMODULE *)(in_stack_00000004 + 8) = hLibModule;
      }
      else {
        FreeLibrary(hLibModule);
        hLibModule = *(HMODULE *)(in_stack_00000004 + 8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0068cc24);
    }
    local_1c = hLibModule;
    if (DAT_0067ca24 != (code *)0x0) {
      pFVar4 = (FARPROC)(*DAT_0067ca24)();
    }
    if (pFVar4 == (FARPROC)0x0) {
      if ((((*(int *)(in_stack_00000004 + 0x14) != 0) && (*(int *)(in_stack_00000004 + 0x1c) != 0))
          && (piVar2 = (int *)FUN_0040bb72(), *piVar2 == 0x4550)) &&
         ((iVar3 = FUN_0040bba2(), iVar3 == *(int *)(in_stack_00000004 + 0x1c) &&
          (iVar3 = FUN_0040bbaf(), iVar3 != 0)))) {
        FUN_0040bb7f();
        pFVar4 = *(FARPROC *)(*(int *)(in_stack_00000004 + 0xc) + local_8 * 4);
        goto LAB_0040bdbc;
      }
      pFVar4 = GetProcAddress(hLibModule,local_20);
    }
    if (pFVar4 == (FARPROC)0x0) {
      local_14 = GetLastError();
      if (DAT_0067ca20 != (code *)0x0) {
        pFVar4 = (FARPROC)(*DAT_0067ca20)();
      }
      if (pFVar4 == (FARPROC)0x0) {
        local_10 = &local_34;
        RaiseException(0xc0fb007f,0,1,(ULONG_PTR *)&local_10);
        pFVar4 = local_18;
      }
    }
    *in_stack_00000008 = (int)pFVar4;
  }
LAB_0040bdbc:
  if (DAT_0067ca24 != (code *)0x0) {
    local_14 = 0;
    local_1c = hLibModule;
    local_18 = pFVar4;
    (*DAT_0067ca24)();
  }
  return pFVar4;
}
