// rea decompile_all
// name: FUN_005611b4
// address: 0x5611b4
// body: available
// range: 0x5611b4-0x56127d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005611b4(void)

{
  uint uVar1;
  DWORD dwMilliseconds;
  uint uVar2;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint in_stack_00000004;
  int in_stack_00000008;

  if (in_stack_00000008 == 0) {
    if (in_stack_00000004 == 0) {
      return;
    }
  }
  else if (in_stack_00000008 < 1) {
    return;
  }
  uVar1 = FUN_00561128();
  iVar3 = extraout_EDX + in_stack_00000008 + (uint)CARRY4(uVar1,in_stack_00000004);
  if (in_stack_00000008 == 0) {
    if (in_stack_00000004 < 2000) goto LAB_00561221;
  }
  else if (in_stack_00000008 < 0) goto LAB_00561221;
  dwMilliseconds =
       FUN_0040976c(in_stack_00000004 - 1000,in_stack_00000008 - (uint)(in_stack_00000004 < 1000),
                    extraout_ECX,1000,0);
  Sleep(dwMilliseconds);
LAB_00561221:
  uVar2 = FUN_00561128();
  if (extraout_EDX_00 == iVar3) {
    while (uVar2 < uVar1 + in_stack_00000004) {
LAB_00561240:
      while( true ) {
        FUN_00628b78();
        uVar2 = FUN_00561128();
        if (extraout_EDX_01 == extraout_EDX) {
          if (uVar2 < uVar1) {
            return;
          }
        }
        else if (extraout_EDX_01 < extraout_EDX) {
          return;
        }
        if (extraout_EDX_01 == iVar3) break;
        if (iVar3 <= extraout_EDX_01) {
          return;
        }
      }
    }
  }
  else if (extraout_EDX_00 < iVar3) goto LAB_00561240;
  return;
}
