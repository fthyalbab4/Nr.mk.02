// rea decompile_all
// name: FUN_0063d830
// address: 0x63d830
// body: available
// range: 0x63d830-0x63d921 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063d830(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;

  puVar1 = PTR_DAT_00781e14;
  (**(code **)(*param_1 + 4))();
  FUN_00701e6c(param_1[0xe],*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x704) + 4),
               *(undefined4 *)(*(int *)(*(int *)puVar1 + 0x704) + 8),*(undefined4 *)PTR_DAT_007819d0
              );
  FUN_007028d0(param_1[0xe],0,0,0,*(undefined4 *)PTR_DAT_00781bb0,*(undefined4 *)(param_2 + 8),
               *(undefined4 *)(param_2 + 4));
  FUN_00701e6c(param_1[0xd],*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x704) + 4),
               *(undefined4 *)(*(int *)(*(int *)puVar1 + 0x704) + 8),*(undefined4 *)PTR_DAT_007819d0
              );
  FUN_007034e0(param_1[0xd],0,0,0,param_2);
  iVar2 = FUN_00404878();
  param_1[0x12] = iVar2;
  iVar2 = FUN_00404878();
  param_1[0x13] = iVar2;
  param_1[0x11] = 5;
  FUN_007022dc(param_1[0xf],*(undefined4 *)(*(int *)puVar1 + 0x704));
  FUN_00644610(*(undefined4 *)puVar1);
  FUN_0063ccbc(param_1,1,1,0);
  return;
}
