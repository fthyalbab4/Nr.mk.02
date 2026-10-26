// rea decompile_all
// name: FUN_0073cabc
// address: 0x73cabc
// body: available
// range: 0x73cabc-0x73cb40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0073cabc(HANDLE param_1)

{
  SIZE_T SVar1;
  LPCVOID lpAddress;
  PVOID pvVar2;
  _MEMORY_BASIC_INFORMATION local_28;
  undefined1 local_9;
  HANDLE local_8;

  lpAddress = (LPCVOID)0x0;
  pvVar2 = (PVOID)0x0;
  local_8 = param_1;
  FUN_00738660(&local_28,0x1c);
  SVar1 = VirtualQueryEx(local_8,(LPCVOID)0x0,&local_28,0x1c);
  local_9 = SVar1 == 0x1c;
  while (SVar1 == 0x1c) {
    if ((pvVar2 != local_28.AllocationBase) &&
       (pvVar2 = local_28.AllocationBase, local_28.Type == 0x1000000)) {
      FUN_0073c9f0(local_8,local_28.AllocationBase);
      pvVar2 = local_28.AllocationBase;
    }
    lpAddress = (LPCVOID)((int)lpAddress + local_28.RegionSize * 2);
    SVar1 = VirtualQueryEx(local_8,lpAddress,&local_28,0x1c);
  }
  return local_9;
}
