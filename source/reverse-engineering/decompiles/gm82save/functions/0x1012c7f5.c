// rea decompile_all
// name: FUN_1012c7f5
// address: 0x1012c7f5
// body: available
// range: 0x1012c7f5-0x1012c8c2 inclusive
// range: 0x1012c8e7-0x1012c902 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __cdecl FUN_1012c7f5(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;

  if ((param_2 == 0) && (DAT_101633ec < 1)) {
    iVar1 = 0;
    goto LAB_1012c8f3;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar2 = dllmain_raw(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 == 0) goto LAB_1012c8f3;
    iVar2 = dllmain_crt_dispatch(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 == 0) goto LAB_1012c8f3;
  }
  iVar1 = FUN_1012ceaf(param_1,param_2);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_1012ceaf(param_1,0);
    FUN_1012c73e((uint)(param_3 != (void *)0x0));
    dllmain_raw(param_1,0,param_3);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = dllmain_crt_dispatch(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = dllmain_raw(param_1,param_2,param_3);
    }
  }
LAB_1012c8f3:
  *unaff_FS_OFFSET = local_14;
  return iVar1;
}
