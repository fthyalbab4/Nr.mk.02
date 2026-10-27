// rea decompile_all
// name: FUN_00753d0c
// address: 0x753d0c
// body: available
// range: 0x753d0c-0x753d8b inclusive
// range: 0x753dac-0x753ec3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00753d0c(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;

  uVar3 = 4;
  if (4 < param_3) {
    do {
      puVar2 = (ushort *)(param_2 + uVar3);
      uVar1 = puVar2[1];
      if (uVar1 < 0x204) {
        if (uVar1 == 0x203) {
          iVar4 = FUN_00753844(&PTR_FUN_0075215c,1,puVar2);
        }
        else if (uVar1 < 10) {
          if (uVar1 == 9) {
            iVar4 = FUN_007537f4(&PTR_FUN_00751cd0,1,puVar2);
          }
          else if (uVar1 == 3) {
            iVar4 = FUN_00753944(&PTR_FUN_0075252c,1,puVar2);
          }
          else {
            if (uVar1 != 4) goto switchD_00753d85_caseD_206;
            iVar4 = FUN_0075399c(&PTR_FUN_007526e8,1,puVar2);
          }
        }
        else if (uVar1 == 0x201) {
          iVar4 = FUN_00753844(&PTR_FUN_00752004,1,puVar2);
        }
        else {
          if (uVar1 != 0x202) goto switchD_00753d85_caseD_206;
          iVar4 = FUN_00753844(&PTR_FUN_007520b0,1,puVar2);
        }
      }
      else {
        switch(uVar1) {
        case 0x204:
          iVar4 = FUN_0075379c(&PTR_FUN_00751b64,1,puVar2);
          FUN_0043ae88(*(undefined4 *)(param_1 + 0x1c),iVar4);
          break;
        case 0x205:
          iVar4 = FUN_0075379c(&PTR_FUN_00751c18,1,puVar2);
          FUN_0043ae88(*(undefined4 *)(param_1 + 0x1c),iVar4);
          break;
        default:
switchD_00753d85_caseD_206:
          iVar4 = 0;
          break;
        case 0x208:
          iVar4 = FUN_0075389c(&PTR_FUN_0075220c,1,puVar2);
          break;
        case 0x209:
          iVar4 = FUN_007538f4(&PTR_FUN_007523b8,1,puVar2);
          break;
        case 0x20b:
          iVar4 = FUN_007539f4(&PTR_FUN_007528a4,1,puVar2);
        }
      }
      if (iVar4 != 0) {
        FUN_0043ae88(*(undefined4 *)(param_1 + 0x18),iVar4);
      }
      uVar3 = uVar3 + *puVar2 + 2;
    } while (uVar3 < param_3);
  }
  return;
}
