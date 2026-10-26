// rea decompile_all
// name: FUN_00564a30
// address: 0x564a30
// body: available
// range: 0x564a30-0x564ada inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,double param_7,double param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (DAT_00686438 < 0x7d01) {
    iVar1 = DAT_00686438 * 0x24;
    FUN_00531620(&local_10,param_2,param_3,(float)param_6,(float)param_7,(float)param_8);
    *(undefined4 *)(&DAT_00721dd4 + iVar1) = local_10;
    *(undefined4 *)(&DAT_00721dd8 + iVar1) = local_c;
    *(undefined4 *)(&DAT_00721ddc + iVar1) = local_8;
    FUN_00531620(&local_10,extraout_EDX,extraout_ECX,0,0,0);
    *(undefined4 *)(&DAT_00721de0 + iVar1) = local_10;
    *(undefined4 *)(&DAT_00721de4 + iVar1) = local_c;
    *(undefined4 *)(&DAT_00721de8 + iVar1) = local_8;
    uVar2 = FUN_0056382c(param_1,extraout_EDX_00,extraout_ECX_00,param_4,param_5);
    *(uint *)(&DAT_00721dec + iVar1) = uVar2 | 1;
    *(undefined4 *)(&DAT_00721df0 + iVar1) = 0;
    *(undefined4 *)(&DAT_00721df4 + iVar1) = 0;
    DAT_00686438 = DAT_00686438 + 1;
  }
  return;
}
