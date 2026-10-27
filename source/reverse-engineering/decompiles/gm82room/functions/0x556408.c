// rea decompile_all
// name: FUN_00556408
// address: 0x556408
// body: available
// range: 0x556408-0x556479 inclusive
// range: 0x5564a3-0x556531 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556408(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;

  iVar2 = FUN_00556af8(param_1,0);
  local_14 = FUN_00556af8(param_1,*(undefined4 *)(iVar2 + 4));
  while( true ) {
    iVar2 = *(int *)(local_14 + 4);
    if (-1 < iVar2 + -1) {
      local_18 = 0;
      do {
        puVar1 = (undefined2 *)(local_14 + 0x10 + local_18 * 0xc);
        uVar3 = FUN_00556af8(param_1,*(undefined4 *)(puVar1 + 2));
        switch(*puVar1) {
        case 0x120:
          (**(code **)(*param_1 + 0xc))(param_1,uVar3,*(undefined4 *)(puVar1 + 4));
          break;
        default:
          (**(code **)(*param_1 + 0x14))(param_1,uVar3,*(undefined4 *)(puVar1 + 4));
          break;
        case 0x125:
          (**(code **)(*param_1 + 8))(param_1,uVar3,*(undefined4 *)(puVar1 + 4));
          break;
        case 0x127:
          (**(code **)(*param_1 + 0x10))(param_1,uVar3,*(undefined4 *)(puVar1 + 4));
          break;
        case 299:
          (**(code **)(*param_1 + 4))(param_1,uVar3,*(undefined4 *)(puVar1 + 4));
          break;
        case 0x130:
          (**(code **)*param_1)(param_1,uVar3,*(undefined4 *)(puVar1 + 4));
        }
        local_18 = local_18 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(int *)(local_14 + 8) == 0) break;
    local_14 = FUN_00556af8(param_1,*(undefined4 *)(local_14 + 8));
  }
  return;
}
