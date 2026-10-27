// rea decompile_all
// name: FUN_0042a16c
// address: 0x42a16c
// body: available
// range: 0x42a16c-0x42a25c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0042a16c(undefined4 param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;

  uVar3 = 1;
  cVar1 = (char)param_1;
  uVar4 = uVar3;
  if (param_3 == 0xe) {
    if (DAT_0067ce64 == '\0') {
      FUN_00424354();
    }
    else {
      uVar4 = DAT_0067ceb0;
      if ((DAT_0067ce64 != '\x01') && (uVar4 = uVar3, DAT_0067ce64 == '\x02')) {
        if ((cVar1 == '\x02') && (param_2 == '\x02')) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        uVar4 = (&DAT_0067ceb0)[iVar2];
      }
    }
  }
  else if (param_3 == 0xf) {
    if (DAT_0067ce64 == '\0') {
      FUN_00424354();
    }
    else {
      uVar4 = DAT_0067ceb2;
      if ((DAT_0067ce64 != '\x01') && (uVar4 = uVar3, DAT_0067ce64 == '\x02')) {
        if ((cVar1 == '\x02') && (param_2 == '\x02')) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
        uVar4 = (&DAT_0067ceb2)[iVar2];
      }
    }
  }
  else if (param_3 - 0x10U < 4) {
    if (DAT_0067ce68 == '\0') {
      FUN_00424354();
    }
    else if (DAT_0067ce68 == '\x01') {
      uVar4 = (&DAT_0067ce94)[param_3 * 2];
    }
    else if (DAT_0067ce68 == '\x02') {
      if (cVar1 == '\x02') {
        if (param_2 == '\x02') {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 2;
      }
    }
  }
  else {
    FUN_00424300(param_1,param_3 + -0x14);
  }
  return uVar4;
}
