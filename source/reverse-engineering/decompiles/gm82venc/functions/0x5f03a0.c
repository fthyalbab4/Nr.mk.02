// rea decompile_all
// name: FUN_005f03a0
// address: 0x5f03a0
// body: available
// range: 0x5f03a0-0x5f0440 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005f03a0(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int local_8;

  piVar5 = &local_10;
  uVar4 = 1;
  piVar3 = (int *)in_stack_00000004[0xa0];
  local_8 = (**(code **)(*piVar3 + 0x48))();
  if (local_8 == 0) {
    iVar1 = MulDiv(local_10,*(int *)(*(int *)PTR_DAT_00689620 + 0x44),0x9ec);
    iVar2 = MulDiv(local_c,*(int *)(*(int *)PTR_DAT_00689620 + 0x44),0x9ec);
    if (((*(byte *)((int)in_stack_00000004 + 0x2a5) & 4) != 0) && (in_stack_00000004[0xa2] == 0)) {
      if (0x20 < iVar1) {
        iVar1 = 0x20;
      }
      if (0x20 < iVar2) {
        iVar2 = 0x20;
      }
    }
    (**(code **)(*in_stack_00000004 + 0x98))
              (in_stack_00000004,in_stack_00000004[0x10],in_stack_00000004[0x11],iVar2,iVar1,piVar3,
               uVar4,piVar5);
  }
  return local_8;
}
